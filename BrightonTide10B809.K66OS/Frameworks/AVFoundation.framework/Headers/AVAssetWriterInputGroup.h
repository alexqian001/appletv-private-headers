/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionGroup.h"
#import "AVFoundation-Structs.h"

@class AVAssetWriterInputGroupInternal, AVAssetWriterInput, NSArray;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {
	AVAssetWriterInputGroupInternal *_internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) AVAssetWriterInput *defaultInput;	// G=0x3027550d; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x302754ed; 
+ (id)assetWriterInputGroupWithInputs:(id)inputs defaultInput:(id)input;	// 0x302751b5
- (id)init;	// 0x30275201
- (id)initWithInputs:(id)inputs defaultInput:(id)input;	// 0x30275215
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;	// 0x3027552d
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;	// 0x30275665
- (id)copyWithZone:(NSZone *)zone;	// 0x302754dd
- (void)dealloc;	// 0x30275401
// declared property getter: - (id)defaultInput;	// 0x3027550d
- (void)finalize;	// 0x30275499
// declared property getter: - (id)inputs;	// 0x302754ed
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30275781
- (id)options;	// 0x302757d1
@end

