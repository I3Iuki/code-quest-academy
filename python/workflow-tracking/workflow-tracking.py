for _ in range(int(input())):
    parts = input().split(" ")

    graph = {
        "Start": {
            "C": "New"
        },

        "New": {
            "S": "Draft"
        },
        
        "Draft": {
            "S": "Draft",
            "B": "Preliminary Review",
        },

        "Preliminary Review": {
            "S": "Preliminary Review",
            "X": "Rejected",
            "A": "Final Review",
            "R": "Waiting Preliminary",
        },

        "Waiting Preliminary": {
            "I": "Preliminary Review"
        },

        "Final Review": {
            "S": "Final Review",
            "X": "Rejected",
            "A": "Approved",
            "R": "Waiting Final"
        },

        "Waiting Final": {
            "I": "Final Review"
        },

        "Rejected": {
            "N": "Customer Notified",
        },

        "Approved": {
            "N": "Customer Notified",
        },

        "Customer Notified": {

        }
    }
    current_state = "Start"

    id = parts[:1]
    commands = parts[1:]

    result = []

    for cmd in commands:
        if graph[current_state].get(cmd):
            current_state = graph[current_state].get(cmd)
            result.append(current_state)
        else:
            result.append("Invalid Command")

    print(id[0], ">".join(result))        