function generateRandomCards(): string {
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
   
function getHandScore(input:string):number {

  function splitInput(input: string, suit: string): string[] {
    let result_array: string[] = [];
    let splitted_input: string[] = input.split(' ');
    for (let i = 0; i < splitted_input.length; i++) {
      result_array.push(splitted_input[i].substring(
        1, splitted_input[i].length
      ));
    }
    return result_array
  }

  function convert_number(rank: number): number {
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

  const suits: string[] = ['H', 'C', 'D', 'S'];
  const numbers: string[] = [
    'A', '2', '3', '4', '5', '6', '7', '8', '9',
    '10', 'J', 'Q', 'K'
  ];
  let score: string = input;
  let returning_string_lines: string[] = [];
  let returning_string: string = '';
  returning_string_lines.push('input: ' + input);
  for (let i = 0; i < suits.length; i++) {
    let suit_total: number = 0;
    let each_line_text: string = suits[i];
    each_line_text += ': ';
    let filtered_input: string[] = splitInput(input, suits[i]);
    for (let j = 0; j < filtered_input.length; j++) {
      suit_total += convert_number(numbers.indexOf(filtered_input[j]));
    }
    each_line_text += suit_total;
    returning_string_lines.push(each_line_text);
  }
  for (let i = 0; i < returning_string_lines.length; i++) {
    returning_string += returning_string_lines[i];
    if ((i + 1) < returning_string_lines.length) {
      returning_string += ' <br /> '
    }
  }
  return returning_string
}

document.querySelector("#app").innerHTML = getHandScore(
  generateRandomCards()
);