### Discription

AN_31 is a program which converts any string or password to random characters, specials and numbers.The output encrypted code is case-sensitive.


Table of contents
=================

<!--ts-->
   * [Working](#Working)
      * [AN_31.c](#AN_31)
      * [Name_Generator.c](#Name_Generator)
      * [Password_decoder](#Password_decoder)
   * [Why](#Why)
   * [Additional](#Additional)
   * [Test_Cases (mac/windows)](#Test_Cases (mac/windows))
      * [Case 1](#Case_1)
      * [Case 2](#Case_2)
      * [Case 3](#Case_3)
      * [Case 4](#Case_4)
      * [Case 5](#Case_5)
   * [Samples](#Samples)
   * [End](#End)
<!--te-->


### Working
#### AN_31
First of all the input string is mapped into a specific number. After that, the numbers are divided into three groups  (convert), (spec) and (timer).
(Convert) contains three digits numbers with constraints 100-193. (Spec) contains single-digit numbers with constraints 0-3. (Timer) contains single-digit numbers with constraints 1-9. (convert) converts the number into a letter, special characters or numbers according to the (spec) group. (timer) means how many times that number is present in the output.
#### Name_Generator
Every character is mapped to a specific two-digit number. The Name_Generator converts the input string into unique numbers.
#### Password_decoder
The program decodes the numbers into a specific string. the program is the reverse program of the Name_Generator program.
### Why
These three programs will help you to secure your file without remembering your password by just renaming your file. Decide any password, using Name_Generator.c to generate your suggested name. Using the password_decoder.c file the password will be decoded.
### Additional
* The AN_31 encrypted hash-code cannot be decrypted
* The length of the output is (2 - 6)times greater than the input length in AN_31
* The output Hash_Code cannot contain any spaces
* Output length is twice the input length in name_generator
* The programs can work for case-sensitive inputs.
### Test_Cases (mac/windows)
#### case_1
File_name:- 4069767679-AN_31.zip<br />
Password:- Hello<br />
Hash_code:- ZLXJVH@_~%*+<br />
#### case_2
File_name:- 37886577807669-AN_31.zip<br />
Password:- Example<br />
Hash_code:- 1<{(3>}*5:?^}$,BNZLXJWAEIM<br />
#### case_3
File_name:- 8065838387798268-AN_31.zip<br />
Password:- password<br />
Hash_code:- FNVDLT#(D5:?^}$).).38=<br />
#### case_4
File_name:- 417836736578010203-AN_31.zip<br />
Password:- InDian123<br />
Hash_code:- )4?~+6[<[ch$).38=\{GKOSW<br />
#### case_5
File_name:- 336882878939111314321516-AN_31.zip<br />
Password:- AdrwyG!#$@%&<br />
Hash_code:- %0;`'2]|#(-2FSWAEI_~%57@}(1WAEIM<br />


### Samples
I have provided three sample files in the repository.
files are password protected. We can access the files using these programs and by following the steps.
* Step one:- copy the file name and enter it in password_decoder.c.
 the generated password is not the password for the zip file.
* Step two:- copy the generated password and enter it in AN_31.c file.
the hash_code will be generated. Enter the hash_code as the password of 				the zip file 

### End
