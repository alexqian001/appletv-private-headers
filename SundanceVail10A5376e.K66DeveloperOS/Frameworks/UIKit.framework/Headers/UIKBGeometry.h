/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	XXStruct_tp$7nC m_x;	// 8 = 0x8
	XXStruct_tp$7nC m_y;	// 16 = 0x10
	XXStruct_tp$7nC m_w;	// 24 = 0x18
	XXStruct_tp$7nC m_h;	// 32 = 0x20
	XXStruct_tp$7nC m_paddingTop;	// 40 = 0x28
	XXStruct_tp$7nC m_paddingLeft;	// 48 = 0x30
	XXStruct_tp$7nC m_paddingBottom;	// 56 = 0x38
	XXStruct_tp$7nC m_paddingRight;	// 64 = 0x40
	BOOL m_explicitlySpecified;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x30531fc1; S=0x30531fd1; @synthesize=m_explicitlySpecified
@property(assign, nonatomic, setter=setH:) XXStruct_tp$7nC h;	// G=0x30531f49; S=0x3053134d; @synthesize=m_h
@property(retain, nonatomic) NSString *name;	// G=0x30531ef1; S=0x30531295; @synthesize=m_name
@property(assign, nonatomic, setter=setPaddingBottom:) XXStruct_tp$7nC paddingBottom;	// G=0x30531f91; S=0x305313c5; @synthesize=m_paddingBottom
@property(assign, nonatomic, setter=setPaddingLeft:) XXStruct_tp$7nC paddingLeft;	// G=0x30531f79; S=0x3053139d; @synthesize=m_paddingLeft
@property(assign, nonatomic, setter=setPaddingRight:) XXStruct_tp$7nC paddingRight;	// G=0x30531fa9; S=0x305313ed; @synthesize=m_paddingRight
@property(assign, nonatomic, setter=setPaddingTop:) XXStruct_tp$7nC paddingTop;	// G=0x30531f61; S=0x30531375; @synthesize=m_paddingTop
@property(assign, nonatomic, setter=setW:) XXStruct_tp$7nC w;	// G=0x30531f31; S=0x30531325; @synthesize=m_w
@property(assign, nonatomic, setter=setX:) XXStruct_tp$7nC x;	// G=0x30531f01; S=0x305312d5; @synthesize=m_x
@property(assign, nonatomic, setter=setY:) XXStruct_tp$7nC y;	// G=0x30531f19; S=0x305312fd; @synthesize=m_y
+ (id)geometry;	// 0x305305b9
+ (id)geometryWithRect:(CGRect)rect;	// 0x30530601
- (id)init;	// 0x305307cd
- (id)initWithCoder:(id)coder;	// 0x3053085d
- (id)initWithName:(id)name rect:(XXStruct_bVmAfD)rect padding:(XXStruct_bVmAfD)padding;	// 0x305306a5
- (id)copyWithZone:(NSZone *)zone;	// 0x30530cf5
- (void)dealloc;	// 0x30530811
- (id)description;	// 0x30531415
- (void)encodeWithCoder:(id)coder;	// 0x30530ac1
// declared property getter: - (BOOL)explicitlySpecified;	// 0x30531fc1
- (CGRect)frame;	// 0x30531861
- (CGRect)frameWithContainingFrame:(CGRect)containingFrame;	// 0x30531899
// declared property getter: - (XXStruct_tp$7nC)h;	// 0x30531f49
- (BOOL)isEqual:(id)equal;	// 0x30530f2d
// declared property getter: - (id)name;	// 0x30531ef1
- (id)overrideGeometry:(id)geometry;	// 0x30531bd1
- (CGRect)paddedFrameWithContainingFrame:(CGRect)containingFrame;	// 0x305319f1
- (CGRect)paddedFrameWithResolvedFrame:(CGRect)resolvedFrame;	// 0x30531a5d
// declared property getter: - (XXStruct_tp$7nC)paddingBottom;	// 0x30531f91
// declared property getter: - (XXStruct_tp$7nC)paddingLeft;	// 0x30531f79
// declared property getter: - (XXStruct_tp$7nC)paddingRight;	// 0x30531fa9
// declared property getter: - (XXStruct_tp$7nC)paddingTop;	// 0x30531f61
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x30531fd1
// declared property setter: - (void)setH:(XXStruct_tp$7nC)h;	// 0x3053134d
// declared property setter: - (void)setName:(id)name;	// 0x30531295
// declared property setter: - (void)setPaddingBottom:(XXStruct_tp$7nC)bottom;	// 0x305313c5
// declared property setter: - (void)setPaddingLeft:(XXStruct_tp$7nC)left;	// 0x3053139d
// declared property setter: - (void)setPaddingRight:(XXStruct_tp$7nC)right;	// 0x305313ed
// declared property setter: - (void)setPaddingTop:(XXStruct_tp$7nC)top;	// 0x30531375
// declared property setter: - (void)setW:(XXStruct_tp$7nC)w;	// 0x30531325
// declared property setter: - (void)setX:(XXStruct_tp$7nC)x;	// 0x305312d5
// declared property setter: - (void)setY:(XXStruct_tp$7nC)y;	// 0x305312fd
- (id)shortDescription;	// 0x305316d1
- (BOOL)usesPercentages;	// 0x30531dd9
// declared property getter: - (XXStruct_tp$7nC)w;	// 0x30531f31
// declared property getter: - (XXStruct_tp$7nC)x;	// 0x30531f01
// declared property getter: - (XXStruct_tp$7nC)y;	// 0x30531f19
@end

