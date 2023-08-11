// First Come First Served basis
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
/*
 * Main function for the task allocation
 */
int main(int argc[], int argv[]){

    int T = 10; // Process time in hours
    int n = 2; // Number of distinct tasks available
    int m = 5; // Number of available agents
    int P[n];   // Number of each tasks required to make sure the process is finished
    float C[m][n]; // Cost matrix for each task and each bot with the ability of the bot to do the task

    // Take input for the cost matrix by the user
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < m ; j++ ){
            std::cin>>C[j][i];
        }
    }

    // Define the process and then initialize the number of each tasks required for the process to be done
    for ( int i = 0 ; i < n ; i++ ){
        std::cin>>P[i];
    }

    std::queue task_queue; // Scheduling Queues
    // Number of tasks needs to be deducted once assigned
    // And once the bot is sent for refueling then the task should be incremented from the task queue
    std::queue refueling_queue; // Once the robot fuel is utilized by the assigned task then the bot is scheduled for refueling

    // Task_Queue (FCFS) -> Task_Performance -> Refueling_Sites (FCFS)
    //   ↑                                                ↓
    //   ←________________________________________________←
}