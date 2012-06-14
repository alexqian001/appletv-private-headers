/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSError.h> // Unknown library


@interface NSError (TSUAdditions)
+ (id)errorWithDomain:(id)domain code:(int)code alertTitle:(id)title alertMessage:(id)message;	// 0x312c397d
+ (id)errorWithDomain:(id)domain code:(int)code alertTitle:(id)title alertMessage:(id)message underlyingError:(id)error;	// 0x312c3a31
+ (id)errorWithDomain:(id)domain code:(int)code description:(id)description recoverySuggestion:(id)suggestion;	// 0x312c3839
+ (id)tsuErrorWithCode:(int)code;	// 0x312c38d1
- (BOOL)isOutOfSpaceError;	// 0x312c3b6d
- (id)localizedAlertMessage;	// 0x312c3b39
- (id)localizedAlertTitle;	// 0x312c3b05
@end
