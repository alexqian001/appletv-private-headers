/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "Foundation-Structs.h"

@class NSURLAuthenticationChallengeInternal;

@interface NSURLAuthenticationChallenge : NSObject <NSCoding> {
	NSURLAuthenticationChallengeInternal *_internal;	// 4 = 0x4
}
@property(retain) id sender;	// G=0x3197a1c9; S=0x3197a3c1; converted property
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)cfauthChallenge sender:(id)sender;	// 0x3197a2b9
- (id)init;	// 0x31979da9
- (id)initWithAuthenticationChallenge:(id)authenticationChallenge sender:(id)sender;	// 0x31979e55
- (id)initWithCoder:(id)coder;	// 0x3197a25d
- (id)initWithProtectionSpace:(id)protectionSpace proposedCredential:(id)credential previousFailureCount:(int)count failureResponse:(id)response error:(id)error sender:(id)sender;	// 0x31979dc1
- (CFURLAuthChallengeRef)_createCFAuthChallenge;	// 0x3197a2f5
- (id)_initWithCFAuthChallenge:(CFURLAuthChallengeRef)cfauthChallenge sender:(id)sender;	// 0x31979f45
- (void)dealloc;	// 0x3197a04d
- (void)encodeWithCoder:(id)coder;	// 0x3197a20d
- (id)error;	// 0x3197a141
- (id)failureResponse;	// 0x3197a185
- (int)previousFailureCount;	// 0x3197a121
- (id)proposedCredential;	// 0x3197a0dd
- (id)protectionSpace;	// 0x3197a099
// converted property getter: - (id)sender;	// 0x3197a1c9
// converted property setter: - (void)setSender:(id)sender;	// 0x3197a3c1
@end

