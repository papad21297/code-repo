function getHandScore(input: string): number {
  const splitInput = (input: string, suit: string): string[] => {
    let result_array: string[] = [];
    let splitted_input: string[] = input.split(' ');
    for (let i = 0; i < splitted_input.length; i++) {
      if (splitted_input[i].substring(0, 1) == suit) {
        result_array.push(splitted_input[i].substring(
          1, splitted_input[i].length
        ));
      }
    }
    return result_array
  }
  const splitInputByRank = (input: string, rank: string): string[] =>  {
    let result_array: string[] = [];
    let splitted_input: string[] = input.split(' ');
    for (let i = 0; i < splitted_input.length; i++) {
      if (splitted_input[i].substring(
        1, splitted_input[i].length
      ) == rank) {
        result_array.push(splitted_input[i].substring(
          1, splitted_input[i].length
        ));
      }
    }
    return result_array
  }
  const convert_number = (rank: number): number =>  {
    let converted_number: number = rank;
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
  }
  let score: number = 0;
  const suits: string[] = ['H', 'C', 'D', 'S'];
  const numbers: string[] = [
    'A', '2', '3', '4', '5', '6', '7', '8', '9',
    '10', 'J', 'Q', 'K'
  ];
  for (let i = 0; i < numbers.length; i++) {
    let numbers_total: number = 0;
    let ranks_filtered_input: string[] = splitInputByRank(
      input, numbers[i]
    );
    for (let j = 0; j < ranks_filtered_input.length; j++) {
      numbers_total += convert_number(
        numbers.indexOf(ranks_filtered_input[j])
      );
    }
    if (ranks_filtered_input.length == 3) {
      if (numbers_total >= score) {
        score = numbers_total
      }
    }
  }
  for (let i = 0; i < suits.length; i++) {
    let suit_total: number = 0;
    let filtered_input: string[] = splitInput(input, suits[i]);
    for (let j = 0; j < filtered_input.length; j++) {
      suit_total += convert_number(numbers.indexOf(filtered_input[j]));
    }
    if (suit_total >= score) {
      score = suit_total;
    }
  }
  return score
}

function getClockAngle(hh_mm: string): number {
  let splitted_hh_mm: string[] = hh_mm.split(':');
  let raw_answer_angle: number = 0;
  let hh: number = parseInt(splitted_hh_mm[0])
  let mm: number = parseInt(splitted_hh_mm[1])
  if (hh > 12) {
    hh -= 12;
  }
  raw_answer_angle = Math.abs((mm * 6) - ((hh * 30) + (mm * 0.5)));
  if (raw_answer_angle > 180) {
    raw_answer_angle -= 180;
  }
  return raw_answer_angle;
}

function getQuestionPart(phrases: string[]): string[] {
  let result_strings_array: string[] = [];
  for (let i = 0; i < phrases.length; i++) {
    let common_substring: string = '';
    for (let j = 0; j < phrases[i].length; j++) {
      for (let k = 0; k < phrases[i].length - j; k++) {
        const sub_sub = phrases[i].substring(
          k, (k + (j + 1))
        );
        if (
          (phrases[(i + 1) % 3].indexOf(sub_sub) !== -1)
          && (phrases[(i + 2) % 3].indexOf(sub_sub)  !== -1)
        ) {
          common_substring = sub_sub;
        }
      }
    }
    const extracted: string = phrases[i].substring(0, (
      phrases[i].indexOf(common_substring)
    )) + phrases[i].substring((
      phrases[i].indexOf(common_substring) +
      common_substring.length
    ), phrases[i].length).trim()
    result_strings_array.push(extracted);
  }
  return result_strings_array;
}