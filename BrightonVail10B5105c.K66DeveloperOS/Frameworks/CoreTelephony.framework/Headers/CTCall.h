/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library
#import "CoreTelephony-Structs.h"

@class NSString;

@interface CTCall : NSObject {
	NSString *_callState;	// 4 = 0x4
	NSString *_callID;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *callID;	// G=0x371fb9fd; S=0x371fba11; @synthesize=_callID
@property(copy, nonatomic) NSString *callState;	// G=0x371fb9d9; S=0x371fb9ed; @synthesize=_callState
+ (id)callForCTCallRef:(CTCallRef)ctcallRef;	// 0x371fb75d
// declared property getter: - (id)callID;	// 0x371fb9fd
// declared property getter: - (id)callState;	// 0x371fb9d9
- (void)dealloc;	// 0x371fb8ad
- (id)description;	// 0x371fb8f9
- (unsigned)hash;	// 0x371fb9b9
- (BOOL)isEqual:(id)equal;	// 0x371fb95d
// declared property setter: - (void)setCallID:(id)anId;	// 0x371fba11
// declared property setter: - (void)setCallState:(id)state;	// 0x371fb9ed
@end
