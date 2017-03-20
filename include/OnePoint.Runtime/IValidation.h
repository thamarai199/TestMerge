//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/IValidation.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _IValidation_H_
//#define _IValidation_H_


#import "ValidatedActions.h"

@protocol IValidation < NSObject>
- (void)validateWithInterview:(Interview*)interview;
- (void)validate:(ValidatedActions)validate;
-(void)validate:(Interview*)interview withValidatedActions:(ValidatedActions)validate;
- (NSMutableArray*)getOptions;
- (NSString *)getFunction;
- (void)setFunction:(NSString *)value;
- (id)getMaxValue;
- (void)setMaxValue:(id)value;
- (id)getMinValue;
- (void)setMinValue:(id)value;
- (NSString *)getMaxValueString;
- (NSString *)getMinValueString;
- (long)getPrecision;
- (void)setPrecision:(long)value;
- (long)getScale;
- (void)setScale:(long)value;
- (NSString *)getValidateExpression;
-(id)getStep;
- (void)setValidateExpression:(NSString *)value;
@end

// _IValidation_H_