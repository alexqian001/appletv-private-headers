/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface InstallableResourceRecord : XXUnknownSuperclass {
	NSString *name;	// 4 = 0x4
	NSString *version;	// 8 = 0x8
	NSString *path;	// 12 = 0xc
	NSDate *lastAccessed;	// 16 = 0x10
	unsigned long long totalBytes;	// 20 = 0x14
}
@property(retain, nonatomic) NSDate *lastAccessed;	// G=0x186705; S=0x186715; @synthesize
@property(copy, nonatomic) NSString *name;	// G=0x186699; S=0x1866ad; @synthesize
@property(copy, nonatomic) NSString *path;	// G=0x1866e1; S=0x1866f5; @synthesize
@property(assign, nonatomic) unsigned long long totalBytes;	// G=0x186725; S=0x18673d; @synthesize
@property(copy, nonatomic) NSString *version;	// G=0x1866bd; S=0x1866d1; @synthesize
+ (id)resourceRecordFromResourcePath:(id)resourcePath;	// 0x1863e1
+ (id)resourceRecordFromResourcePath:(id)resourcePath withVersion:(id)version withLastAccessed:(id)lastAccessed;	// 0x186091
- (void)dealloc;	// 0x1864b1
// declared property getter: - (id)lastAccessed;	// 0x186705
// declared property getter: - (id)name;	// 0x186699
// declared property getter: - (id)path;	// 0x1866e1
- (void)remove;	// 0x186631
- (void)save;	// 0x18653d
// declared property setter: - (void)setLastAccessed:(id)accessed;	// 0x186715
// declared property setter: - (void)setName:(id)name;	// 0x1866ad
// declared property setter: - (void)setPath:(id)path;	// 0x1866f5
// declared property setter: - (void)setTotalBytes:(unsigned long long)bytes;	// 0x18673d
// declared property setter: - (void)setVersion:(id)version;	// 0x1866d1
// declared property getter: - (unsigned long long)totalBytes;	// 0x186725
// declared property getter: - (id)version;	// 0x1866bd
@end
