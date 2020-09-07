#!/bin/python3

import math
import os
import random
import re
import sys

class SinglyLinkedListNode:
    def __init__(self, node_data):
        self.data = node_data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert_node(self, node_data):
        node = SinglyLinkedListNode(node_data)

        if not self.head:
            self.head = node
        else:
            self.tail.next = node

        self.tail = node

def print_singly_linked_list(node, sep):
    while node:
        print(node.data, end='')

        node = node.next

        if node:
            print(sep, end='')
            
            
def isValidPalindrome(ll):
    arr = []
    node = l.head
    while node:
        arr.append(node.data)
        node = node.next
    for i in range(len(arr)):
        if(arr[i]!=arr[len(arr)-i-1]):
            return 0
    return 1

if __name__ == '__main__':
    f_count = int(input().strip())
    for i in range(f_count):
        l_count = int(input().strip())

        l = SinglyLinkedList()

        for _ in range(l_count):
            l_item = int(input().strip())
            l.insert_node(l_item)
        print(isValidPalindrome(l))
