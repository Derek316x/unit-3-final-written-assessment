//
//  Written.h
//  unit-3-final-assessment
//
//  Created by Michael Kavouras on 12/1/15.
//  Copyright © 2015 Michael Kavouras. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Written : NSObject

- (NSInteger)returnAnyPositiveInteger;

- (NSInteger)returnAnyPositiveIntegerGreaterThan1000;

- (CGFloat)returnAnyNegativeFloat;

- (BOOL)returnATruthyBool;

- (char)returnTheCharacterK;

- (NSInteger)returnTheSumOfIntegerA:(NSInteger)integerA
                        andIntegerB:(NSInteger)integerB;

- (CGFloat)returnTheDifferenceBetweenFloatA:(CGFloat)floatA
                                  andFloatB:(CGFloat)floatB;

- (CGFloat)returnTheProductOfXAnd100:(CGFloat)x;

- (CGFloat)returnTheQuotientOfFloatA:(CGFloat)floatA
                           andFloatB:(CGFloat)floatB;

- (BOOL)returnYESIfXIsGreaterThan10AndNoIfXIsLessThanOrEqualTo10:(NSInteger)x;

- (BOOL)returnYESIfXIsEvenAndNOIfXIsOdd:(NSInteger)x;

- (NSInteger)returnTheSumOf0To246;

- (NSInteger)returnTheSumOfAllEvenNumbersBetween0And1000;

- (id)returnThe5thElementInTheArray:(NSArray *)theArray;

- (NSArray *)returnAnArrayWithTheDescribedItems;

- (void)addBalloonAtIndexTwo:(NSMutableArray *)array;

- (NSArray *)joinArrayOne:(NSArray *)arrayOne
             withArrayTwo:(NSArray *)arrayTwo;

- (NSString *)returnTheLastStandardResultionImageURL:(NSDictionary *)JSON;

- (void)manipulateTheDictionary:(NSMutableDictionary *)aDictionary;

@end
