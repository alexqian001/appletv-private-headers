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
@property(copy, nonatomic) NSString *callID;	// G=0x3173e70d; S=0x3173e721; @synthesize=_callID
@property(copy, nonatomic) NSString *callState;	// G=0x3173e6e9; S=0x3173e6fd; @synthesize=_callState
+ (id)callForCTCallRef:(CTCallRef)ctcallRef;	// 0x3173e46d
// declared property getter: - (id)callID;	// 0x3173e70d
// declared property getter: - (id)callState;	// 0x3173e6e9
- (void)dealloc;	// 0x3173e5bd
- (id)description;	// 0x3173e609
- (unsigned)hash;	// 0x3173e6c9
- (BOOL)isEqual:(id)equal;	// 0x3173e66d
// declared property setter: - (void)setCallID:(id)anId;	// 0x3173e721
// declared property setter: - (void)setCallState:(id)state;	// 0x3173e6fd
@end

