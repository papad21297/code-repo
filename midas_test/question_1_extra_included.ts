// https://jsfiddle.net/boilerplate/typescript

// function generateRandomCards(): string {
function generateRandomCards(): number {
  const suits: string[] = ['H', 'C', 'D', 'S'];
  const numbers: string[] = [
    'A', '2', '3', '4', '5', '6', '7', '8', '9',
    '10', 'J', 'Q', 'K'
  ];

  const numCards: number = Math.floor(
    Math.random() * 8
  ) + 2;
  const randomCards: string[] = [];

  for (let _ = 0; _ < numCards; _++) {
    const suit: string = suits[
      Math.floor(Math.random() * suits.length)
    ];
    const number: string = numbers[
      Math.floor(Math.random() * numbers.length)
    ];
    const card: string = `${suit}${number}`;
    randomCards.push(card);
  }

  const cardsOutput: string = randomCards.join(' ');
  return cardsOutput;
}
   
function getHandScore(input: string): string {

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
  // let returning_string_lines: string[] = [];
  // let returning_string: string = '';
  // returning_string_lines.push('input: ' + input);
  // returning_string_lines.push('');
  // returning_string_lines.push('grouped by ranks:');
  for (let i = 0; i < numbers.length; i++) {
    // let each_line_text: string = numbers[i];
    let numbers_total: number = 0;
    // each_line_text += ': ';
    let ranks_filtered_input: string[] = splitInputByRank(
    	input, numbers[i]
    );
    for (let j = 0; j < ranks_filtered_input.length; j++) {
      numbers_total += convert_number(
        numbers.indexOf(ranks_filtered_input[j])
      );
    }
    // each_line_text += numbers_total;
    if (ranks_filtered_input.length == 3) {
      if (numbers_total >= score) {
        score = numbers_total
      }
	    // returning_string_lines.push(
      //   ''
      //   + each_line_text
      //   + ' (score: '
      //   + score
      //   + ')'
      // );
    }

  }
  // returning_string_lines.push('');
  // returning_string_lines.push('grouped by suits:');
  for (let i = 0; i < suits.length; i++) {
    let suit_total: number = 0;
    // let each_line_text: string = suits[i];
    // each_line_text += ': ';
    let filtered_input: string[] = splitInput(input, suits[i]);
    for (let j = 0; j < filtered_input.length; j++) {
      suit_total += convert_number(numbers.indexOf(filtered_input[j]));
    }
    if (suit_total >= score) {
      score = suit_total;
    }
    // each_line_text += suit_total;
    // each_line_text += ' (score: ' + score + ')';
    // returning_string_lines.push(each_line_text);
  }
  // returning_string_lines.push('');
  // returning_string_lines.push('score: ' + score);
  // for (let i = 0; i < returning_string_lines.length; i++) {
  //   returning_string += returning_string_lines[i];
  //   if ((i + 1) < returning_string_lines.length) {
  //     returning_string += ' <br /> '
  //   }
  // }
  // return returning_string
  return score
}

let input = generateRandomCards()

document.querySelector("#app").innerHTML = (
  ''
  + 'input: '
  + input
  + '<br /> score: '
  + getHandScore(input)
);