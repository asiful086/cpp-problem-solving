



# phone_number = "3662277"
# words = ["foo", "bar", "foobar", "emo","cap", "car", "cat"]



# def find_words(p_number, words):
#     key_pad = ["", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"]
#     new_list = []
#     # check in words
#     for word in words:
#         isWord = True
#         # check in word
#         for letter in word:
#             # check in key_pad
#             for value in key_pad:
#                 if(letter  in value):
#                     key = key_pad.index(value) + 1
#                     if(str(key) not in p_number):
#                         isWord = False
#                         break

#         if(isWord):
#             new_list.append(word)

                    
#     return new_list


# print(find_words(phone_number, words))



# def is_prime(n):
#   if n <= 0 or n == 1:
#     return False
#   i = 2
#   while (i <= n ** 0.5 ):
#     if n % i == 0:
#       return False
#     i += 1
#   return True


# print(is_prime(-5))




class AmrList:
  def __init__(self):
    self.length = 0
    self.data = {}
  def get(self,index):
    return self.data[index]

  def push(self,item):
    self.data[self.length] = item   
    self.length = self.length+1
    return self.length

  def all_item(self):
    return list(self.data)



mithila = AmrList()

mithila.push("farah")
the_size = mithila.push("jannath")
# print(the_size)
# print(mithila.get(0))
print(mithila.all_item())


# hello = ["fahah", "jannath"]
# print(hello[0])



# Not only "Junior Software Engineer" at ITsian But, Always hungry for seeking knowledge (specially in tech and human language) | Found "Traveling" is my best dude.   cricket



# I helped students by teaching them tech what I am familiar with (mainly js tech). I have been a junior Software Engineer as well as a teacher also in ITsian. I think by doing that, I always get revised and dive deeper, what I find valuable.

# As a self taught programmer, I had to come through many difficulties. It creates a strong power inside me, that is "finding solution from google search 😁😁", what makes me a better coder. And it makes me realize that what could be those weakest points while walking through coder roadmap. That's why it is easy for me to teach and also learn.

# When I am free, I love to pet cats or play cricket(if its evening).