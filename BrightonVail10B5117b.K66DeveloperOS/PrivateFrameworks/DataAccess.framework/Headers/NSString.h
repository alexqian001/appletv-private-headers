/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSString.h> // Unknown library


@interface NSString (DAKeychainAdditions)
- (id)stringByURLQuoting;	// 0x33b38e11
@end

@interface NSString (DAExtensions)
- (id)appendSlashIfNeeded;	// 0x33b3fa31
- (id)removeSlashIfNeeded;	// 0x33b3f9d9
- (id)stringByAddingPercentEscapesForUsername;	// 0x33b3f951
- (id)stringByRemovingPercentEscapesForUsername;	// 0x33b3f9a1
- (id)stringByURLEscapingPathComponent;	// 0x33b3fa7d
@end

@interface NSString (DALeastInfoURLExtension)
- (id)absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)parentURL;	// 0x33b40909
@end
