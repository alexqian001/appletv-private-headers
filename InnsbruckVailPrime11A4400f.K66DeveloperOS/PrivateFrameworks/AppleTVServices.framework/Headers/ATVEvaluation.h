/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>


@interface ATVEvaluation : NSObject {
}
+ (id)evaluationWithName:(id)name;	// 0x300a7ec1
+ (void)initialize;	// 0x300a7e55
+ (void)registerEvaluation:(id)evaluation withName:(id)name;	// 0x300a7edd
- (BOOL)evaluateValue:(id)value usingOperator:(id)anOperator withUserInfo:(id)userInfo;	// 0x300a804d
- (SEL)selectorForOperator:(id)anOperator;	// 0x300a7f19
@end
