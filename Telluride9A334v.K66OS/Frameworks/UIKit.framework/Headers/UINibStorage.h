/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSBundle, NSData, NSString, UINibDecoder;

__attribute__((visibility("hidden")))
@interface UINibStorage : NSObject {
@private
	NSString *bundleResourceName;	// 4 = 0x4
	NSBundle *bundle;	// 8 = 0x8
	NSData *archiveData;	// 12 = 0xc
	UINibDecoder *nibDecoder;	// 16 = 0x10
	BOOL instantiatingForSimulator;	// 20 = 0x14
	BOOL captureEnclosingNIBBundleOnDecode;	// 21 = 0x15
}
@property(copy, nonatomic) NSData *archiveData;	// G=0x3029d469; S=0x3029d479; @synthesize
@property(retain, nonatomic) NSBundle *bundle;	// G=0x3029d435; S=0x3029d445; @synthesize
@property(copy, nonatomic) NSString *bundleResourceName;	// G=0x3029d401; S=0x3029d411; @synthesize
@property(assign) BOOL captureEnclosingNIBBundleOnDecode;	// G=0x3029d4f1; S=0x3029d501; @synthesize
@property(assign, nonatomic) BOOL instantiatingForSimulator;	// G=0x3029d4d1; S=0x3029d4e1; @synthesize
@property(retain, nonatomic) UINibDecoder *nibDecoder;	// G=0x3029d49d; S=0x3029d4ad; @synthesize
// declared property getter: - (id)archiveData;	// 0x3029d469
// declared property getter: - (id)bundle;	// 0x3029d435
// declared property getter: - (id)bundleResourceName;	// 0x3029d401
// declared property getter: - (BOOL)captureEnclosingNIBBundleOnDecode;	// 0x3029d4f1
- (void)dealloc;	// 0x3029d379
// declared property getter: - (BOOL)instantiatingForSimulator;	// 0x3029d4d1
// declared property getter: - (id)nibDecoder;	// 0x3029d49d
// declared property setter: - (void)setArchiveData:(id)data;	// 0x3029d479
// declared property setter: - (void)setBundle:(id)bundle;	// 0x3029d445
// declared property setter: - (void)setBundleResourceName:(id)name;	// 0x3029d411
// declared property setter: - (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)decode;	// 0x3029d501
// declared property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x3029d4e1
// declared property setter: - (void)setNibDecoder:(id)decoder;	// 0x3029d4ad
@end

