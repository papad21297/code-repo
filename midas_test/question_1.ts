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
          if (splitted_input[i].substring(0, 1) == suit) {
            result_array.push(splitted_input[i]);
        }
      }
      return result_array
    }
  
    const suits: string[] = ['H', 'C', 'D', 'S'];
    const numbers: string[] = [
      'A', '2', '3', '4', '5', '6', '7', '8', '9',
      '10', 'J', 'Q', 'K'
    ];
    let score: string = input;
    let returning_string_lines: string[] = [];
    let returning_string: string = '';
    for (let i = 0; i < suits.length; i++) {
      let each_line_text: string = suits[i];
      each_line_text += ': ';
      let filtered_input: string[] = splitInput(input, suits[i]);
      console.log(filtered_input);
      for (let j = 0; j < filtered_input.length; j++) {
        each_line_text += filtered_input[j]
        if ((j + 1) < filtered_input.length) {
          each_line_text += ', '
        }
      }
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