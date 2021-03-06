/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSURL;

@interface SAUIImageResource : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) double pointHeight;	// G=0x30511699; S=0x30511719; 
@property(assign, nonatomic) double pointWidth;	// G=0x30511761; S=0x305117e1; 
@property(copy, nonatomic) NSURL *resourceUrl;	// G=0x30511825; S=0x305118a1; 
@property(assign, nonatomic) double scaleFactor;	// G=0x30511901; S=0x30511981; 
+ (id)imageResource;	// 0x30511605
+ (id)imageResourceWithDictionary:(id)dictionary context:(id)context;	// 0x30511649
- (id)encodedClassName;	// 0x305115f9
- (id)groupIdentifier;	// 0x305115e9
// declared property getter: - (double)pointHeight;	// 0x30511699
// declared property getter: - (double)pointWidth;	// 0x30511761
// declared property getter: - (id)resourceUrl;	// 0x30511825
// declared property getter: - (double)scaleFactor;	// 0x30511901
// declared property setter: - (void)setPointHeight:(double)height;	// 0x30511719
// declared property setter: - (void)setPointWidth:(double)width;	// 0x305117e1
// declared property setter: - (void)setResourceUrl:(id)url;	// 0x305118a1
// declared property setter: - (void)setScaleFactor:(double)factor;	// 0x30511981
@end

