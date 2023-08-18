"use strict";
function getHandScore(input) {
    const splitInput = (input, suit) => {
        let result_array = [];
        let splitted_input = input.split(' ');
        for (let i = 0; i < splitted_input.length; i++) {
            if (splitted_input[i].substring(0, 1) == suit) {
                result_array.push(splitted_input[i].substring(1, splitted_input[i].length));
            }
        }
        return result_array;
    };
    const splitInputByRank = (input, rank) => {
        let result_array = [];
        let splitted_input = input.split(' ');
        for (let i = 0; i < splitted_input.length; i++) {
            if (splitted_input[i].substring(1, splitted_input[i].length) == rank) {
                result_array.push(splitted_input[i].substring(1, splitted_input[i].length));
            }
        }
        return result_array;
    };
    const convert_number = (rank) => {
        let converted_number = rank;
        if (rank == 0) {
            converted_number += 11;
        }
        else if ((rank >= 10) && (rank <= 12)) {
            converted_number = 10;
        }
        else {
            converted_number++;
        }
        return converted_number;
    };
    let score = 0;
    const suits = ['H', 'C', 'D', 'S'];
    const numbers = [
        'A', '2', '3', '4', '5', '6', '7', '8', '9',
        '10', 'J', 'Q', 'K'
    ];
    for (let i = 0; i < numbers.length; i++) {
        let numbers_total = 0;
        let ranks_filtered_input = splitInputByRank(input, numbers[i]);
        for (let j = 0; j < ranks_filtered_input.length; j++) {
            numbers_total += convert_number(numbers.indexOf(ranks_filtered_input[j]));
        }
        if (ranks_filtered_input.length == 3) {
            if (numbers_total >= score) {
                score = numbers_total;
            }
        }
    }
    for (let i = 0; i < suits.length; i++) {
        let suit_total = 0;
        let filtered_input = splitInput(input, suits[i]);
        for (let j = 0; j < filtered_input.length; j++) {
            suit_total += convert_number(numbers.indexOf(filtered_input[j]));
        }
        if (suit_total >= score) {
            score = suit_total;
        }
    }
    return score;
}
function getClockAngle(hh_mm) {
    let splitted_hh_mm = hh_mm.split(':');
    let raw_answer_angle = 0;
    let hh = parseInt(splitted_hh_mm[0]);
    let mm = parseInt(splitted_hh_mm[1]);
    if (hh > 12) {
        hh -= 12;
    }
    raw_answer_angle = Math.abs((mm * 6) - ((hh * 30) + (mm * 0.5)));
    if (raw_answer_angle > 180) {
        raw_answer_angle -= 180;
    }
    return raw_answer_angle;
}
function getQuestionPart(phrases) {
    let result_strings_array = [];
    for (let i = 0; i < phrases.length; i++) {
        let common_substring = '';
        for (let j = 0; j < phrases[i].length; j++) {
            for (let k = 0; k < phrases[i].length - j; k++) {
                const sub_sub = phrases[i].substring(k, (k + (j + 1)));
                if ((phrases[(i + 1) % 3].indexOf(sub_sub) !== -1)
                    && (phrases[(i + 2) % 3].indexOf(sub_sub) !== -1)) {
                    common_substring = sub_sub;
                }
            }
        }
        const extracted = phrases[i].substring(0, (phrases[i].indexOf(common_substring))) + phrases[i].substring((phrases[i].indexOf(common_substring) +
            common_substring.length), phrases[i].length).trim();
        result_strings_array.push(extracted);
    }
    return result_strings_array;
}
const generateRandomCards = () => {
    const suits = ['H', 'C', 'D', 'S'];
    const numbers = [
        'A', '2', '3', '4', '5', '6', '7', '8', '9',
        '10', 'J', 'Q', 'K'
    ];
    const numCards = Math.floor(Math.random() * 8) + 2;
    const randomCards = [];
    for (let _ = 0; _ < numCards; _++) {
        const suit = suits[Math.floor(Math.random() * suits.length)];
        const number = numbers[Math.floor(Math.random() * numbers.length)];
        const card = `${suit}${number}`;
        randomCards.push(card);
    }
    const cardsOutput = randomCards.join(' ');
    return cardsOutput;
};
function getRandomTime() {
    const hours = Math.floor(Math.random() * 24);
    const minutes = Math.floor(Math.random() * 60);
    const formattedHours = hours.toString().padStart(2, '0');
    const formattedMinutes = minutes.toString().padStart(2, '0');
    return `${formattedHours}:${formattedMinutes}`;
}
function getTestingPhrases() {
    const testing_phrases = {
        "0": { "0": "BATHROOM", "1": "BATH SALTS", "2": "BLOODBATH" },
        "1": { "0": "BEFRIEND", "1": "GIRLFRIEND", "2": "FRIENDSHIP" },
        "2": { "0": "HEADMASTER", "1": "HEADLIGHT", "2": "HEADWAY" },
        "3": { "0": "RAINBOW", "1": "RAINCOAT", "2": "RAINFALL" },
        "4": { "0": "HONEYBEE", "1": "HONEYCOMB", "2": "HONEYMOON" },
        "5": { "0": "FOOTPRINT", "1": "FOOTBALL", "2": "FOOTSTEP" },
        "6": { "0": "FIREFIGHTER", "1": "FIREFLY", "2": "FIREPOWER" },
        "7": { "0": "BOOKSHELF", "1": "BOOKMARK", "2": "BOOKCASE" },
        "8": { "0": "SUNFLOWER", "1": "SUNSHINE", "2": "SUNBURN" },
        "9": { "0": "WATERFALL", "1": "WATERMELON", "2": "WATERPROOF" },
        "10": { "0": "TREEHOUSE", "1": "TREE TRUNK", "2": "TREETOP" },
        "11": { "0": "PEANUT BUTTER", "1": "PEANUT SHELL", "2": "PEANUT ALLERGY" },
        "12": { "0": "MOONLIGHT", "1": "MOONSHINE", "2": "MOONWALK" },
        "13": { "0": "SPACESHIP", "1": "SPACEWALK", "2": "SPACECRAFT" },
        "14": { "0": "GOLDFISH", "1": "GOLD BAR", "2": "GOLDMINE" },
        "15": { "0": "DRAGONFLY", "1": "DRAGON SCALE", "2": "DRAGON BREATH" },
        "16": { "0": "SNOWFLAKE", "1": "SNOWMAN", "2": "SNOWSTORM" },
        "17": { "0": "HONEYDEW", "1": "HONEYBEE", "2": "HONEYCOMB" },
        "18": { "0": "THUNDERBOLT", "1": "THUNDERBIRD", "2": "THUNDERSTRUCK" }
    };
    return testing_phrases;
}
let input_1 = generateRandomCards();
console.log('==================================================== Question 01');
console.log('Q1 input: "' + input_1 + '"');
console.log('Q1 score: \'' + getHandScore(input_1) + '\'');
console.log('');
let input_2 = getRandomTime();
console.log('==================================================== Question 02');
console.log('Q1 input: "' + input_2 + '"');
console.log('Q1 score: \'' + getClockAngle(input_2) + '\'');
console.log('');
console.log('==================================================== Question 03');
let input = getTestingPhrases();
for (let i = 0; i < Object.keys(input).length; i++) {
    const arr = Array.from(Object.values(input[Object.keys(input)[i]]));
    console.log('phrases #' + i + ': ' + JSON.stringify(arr));
    const result_strings_array = getQuestionPart(arr);
    console.log('result: #' + i + ': ===> ' + JSON.stringify(result_strings_array));
}
