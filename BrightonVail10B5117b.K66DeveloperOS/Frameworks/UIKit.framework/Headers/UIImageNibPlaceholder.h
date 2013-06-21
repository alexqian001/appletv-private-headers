/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImage.h"
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIImageNibPlaceholder : UIImage <NSCoding> {
	NSString *runtimeResourceName;	// 36 = 0x24
}
- (id)initWithCoder:(id)coder;	// 0x32e2ab95
- (id)initWithContentsOfFile:(id)file andRuntimeResourceName:(id)name;	// 0x32f12705
- (id)initWithData:(id)data andRuntimeResourceName:(id)name;	// 0x32f12759
- (void)dealloc;	// 0x32e2cb69
- (void)encodeWithCoder:(id)coder;	// 0x32f127ad
@end
