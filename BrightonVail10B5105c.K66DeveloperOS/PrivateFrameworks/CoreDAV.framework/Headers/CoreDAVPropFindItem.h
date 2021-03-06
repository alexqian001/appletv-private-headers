/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren;

@interface CoreDAVPropFindItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_propName;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_allProp;	// 32 = 0x20
	CoreDAVItem *_include;	// 36 = 0x24
	CoreDAVItem *_prop;	// 40 = 0x28
}
@property(retain) CoreDAVItemWithNoChildren *allProp;	// G=0x36009ee9; S=0x36009efd; @synthesize=_allProp
@property(retain) CoreDAVItem *include;	// G=0x36009f0d; S=0x36009f21; @synthesize=_include
@property(retain) CoreDAVItem *prop;	// G=0x36009f31; S=0x36009f45; @synthesize=_prop
@property(retain) CoreDAVItemWithNoChildren *propName;	// G=0x36009ec5; S=0x36009ed9; @synthesize=_propName
+ (id)copyParseRules;	// 0x36009b99
- (id)init;	// 0x360099b9
// declared property getter: - (id)allProp;	// 0x36009ee9
- (void)dealloc;	// 0x360099e5
- (id)description;	// 0x36009a71
// declared property getter: - (id)include;	// 0x36009f0d
// declared property getter: - (id)prop;	// 0x36009f31
// declared property getter: - (id)propName;	// 0x36009ec5
// declared property setter: - (void)setAllProp:(id)prop;	// 0x36009efd
// declared property setter: - (void)setInclude:(id)include;	// 0x36009f21
// declared property setter: - (void)setProp:(id)prop;	// 0x36009f45
// declared property setter: - (void)setPropName:(id)name;	// 0x36009ed9
@end

