/* File : building_construction.i */
 
%module building_construction
%include "std_string.i"
%include "std_vector.i"
 
%{
#include "Floor.h"
#include "Skyscraper.h"
%}
 
/* Let's just grab the entire header files here */
%include "Skyscraper.h"
%include "Floor.h"