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