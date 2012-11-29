/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ABCardContentPluginManager : NSObject {
	NSString *_pluginsDirectory;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *pluginsDirectory;	// G=0x37695b5d; @synthesize=_pluginsDirectory
- (id)bundleNameForLabel:(id)label;	// 0x376958fd
- (Class)contentProviderClassForPerson:(void *)person;	// 0x37619e5d
- (Class)contentProviderForBundleName:(id)bundleName;	// 0x37695939
- (void)dealloc;	// 0x3762c87d
// declared property getter: - (id)pluginsDirectory;	// 0x37695b5d
@end
