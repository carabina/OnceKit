//
//  InterestsController.m
//  当地主
//
//  Created by 曹绍奇 on 15/9/18.
//  Copyright (c) 2015年 曹绍奇. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extension)
- (BOOL)isPhoneNumber;

- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;



- (BOOL)isEmailAdress;
- (BOOL)isIdentityID;
/**
 *  验证日期格式
 *
 *  @param BOOL <#BOOL description#>
 *
 *  @return <#return value description#>
 */
-(BOOL)isDatecorrect;
/**
 *  是否为电话号码
 *
 *  @param pattern 传入需要检测的字符串
 *
 *  @return 返回检测结果 是或者不是
 */
-(BOOL)isPhoneNumber ;
/**
 *  检测是否为邮箱
 *
 *  @param pattern 传入需要检测的字符串
 *
 *  @return 返回检测结果 是或者不是
 */
-(BOOL)detectionIsEmailQualified ;
/**
 *  检测用户输入密码是否以字母开头，长度在6-18之间，只能包含字符、数字和下划线。
 *
 *  @param pattern 传入需要检测的字符串
 *
 *  @return 返回检测结果 是或者不是
 */
-(BOOL)detectionIsPasswordQualified ;
/**
 *  验证身份证号（15位或18位数字）
 *  @param pattern 传入需要检测的字符串
 *
 *  @return 返回检测结果 是或者不是
 */
-(BOOL)detectionIsIdCardNumberQualified ;

/**
 *  验证IP地址（15位或18位数字）
 *  @param pattern 传入需要检测的字符串
 *
 *  @return 返回检测结果 是或者不是
 */
-(BOOL)detectionIsIPAddress ;

/**
 *  验证输入的是否全为数字
 *  @param pattern 传入需要检测的字符串
 *
 *  @return 返回检测结果 是或者不是
 */
-(BOOL)detectionIsAllNumber ;

/**
 *  验证由26个英文字母组成的字符串
 *  @param pattern 传入需要检测的字符串
 *
 *  @return 返回检测结果 是或者不是
 */
-(BOOL)detectionIsEnglishAlphabet ;
/**
 *  验证输入的是否是URL地址
 *  @param pattern 传入需要检测的字符串
 *
 *  @return 返回检测结果 是或者不是
 */
-(BOOL)detectionIsUrl ;

/**
 *  验证输入的是否是URL地址
 *  @param pattern 传入需要检测的字符串
 *
 *  @return 返回检测结果 是或者不是
 */
-(BOOL)detectionIsChinese ;

/**
 *  验证输入的是否是URL地址
 *  @param pattern 传入需要检测的字符串
 *
 *  @return 返回检测结果 是或者不是
 */
-(BOOL)detectionNormalText:(NSString *)normalStr WithHighLightText:(NSString *)HighLightStr;

/**
 *  计算文字frme
 *
 *  @param font    <#font description#>
 *  @param maxSize <#maxSize description#>
 *
 *  @return <#return value description#>
 */
- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;

@end