//WAP to create quiz application
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct {
    char question[256];
    char options[4][64];
    char correct_option;
} QuizQuestion;

int main() {
    QuizQuestion quiz[8] = {
        {
            "1. What is the longest river in the world?",
            {"A. Amazon Rive", "B. Ganga River", "C. Moskva River", "D. Nile River"},
            'D'
        },
        {
            "2. What is the only even prime number?",
            {"A. 2", "B. 4", "C. 6", "D. 8"},
            'A'
        },
        {
            "3. Which planet is known as the Red Planet?",
            {"A. Earth", "B. Mars", "C. Jupiter", "D. Saturn"},
            'B'
        },
        {
            "4. Which continent is the Sahara Desert located in?",
            {"A. Asia", "B. Africa", "C. North America", "D. Europe"},
            'B'
        },
        {
            "5. What does HTTP stand for?",
            {"A. HyperText Transfer Protocol", "B. Hyperlink Text Transfer Program", "C. High Tech Transfer Protocol", "D. HyperText Transmission Process"},
            'A'
        },
        {
            "6. In what year did the Titanic sink in the Atlantic Ocean?",
            {"A. 1905", "B. 1912", "C. 1945", "D. 1942"},
            'B'
        },
        {
            "7. Who was the first Prime Minister Of India?",
            {"A. Indira Gandhi", "B. Jawaharlal Nehru", "C. Dr. Rajendra Prasand", "D. Sardar Vallabhbhai Patel"},
            'B'
        },
        {
            "8. What is the most abundant gas in the Earth's atmosphere?",
            {"A. Oxygen", "B. Argon", "C. Nitrogen", "D. Carbon Dioxide"},
            'C'
        }
    };
    int score = 0;
    char guess;
    printf("=========================================\n");
    printf("        WELCOME TO THE C QUIZ GAME       \n");
    printf("=========================================\n\n");
    for (int i=0; i<8; i++) {
        printf("Question %d: %s\n", i + 1, quiz[i].question);
        for (int j=0; j<4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }
        while (1) {
            printf("Enter your answer (A, B, C, or D): ");
            scanf(" %c", &guess); 
            guess = toupper(guess);
            if (guess>='A' && guess <= 'D') {
                break;
            }
            printf("Invalid choice! Please enter A, B, C, or D.\n");
        }
        if (guess == quiz[i].correct_option) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %c.\n\n", quiz[i].correct_option);
        }
    }
    printf("=========================================\n");
    printf("GAME OVER! Your final score: %d/8\n", score);
    printf("Percentage: %.2f%%\n", ((float)score/8) * 100);
    printf("=========================================\n");

    return 0;
}
