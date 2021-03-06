/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface ATVJSView : NSObject {
@private
	BRControl *_control;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) BRControl *control;	// G=0x30712429; @synthesize=_control
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x30712621
+ (OpaqueJSValue *)constructObjectWithClassName:(id)className withATVJSViewClass:(Class)atvjsviewClass inContext:(OpaqueJSContext *)context;	// 0x3071284d
+ (id)viewFromValue:(OpaqueJSValue *)value inContext:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x307128c5
// declared property getter: - (id)control;	// 0x30712429
- (void)dealloc;	// 0x307122b9
- (id)makeControl;	// 0x3071246d
@end

