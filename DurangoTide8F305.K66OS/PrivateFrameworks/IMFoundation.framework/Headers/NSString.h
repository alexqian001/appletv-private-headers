/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;	// 0x31ad67dd
+ (id)stringGUID;	// 0x31ad6425
- (id)commaSeparatedComponents;	// 0x31ad3c85
- (unsigned)hexValue;	// 0x31ad6069
- (BOOL)isDirectory;	// 0x31ad3e91
- (BOOL)isEqualToIgnoringCase:(id)ignoringCase;	// 0x31ad3ed5
- (BOOL)isICQ;	// 0x31ad3d91
- (BOOL)isICQorPhone;	// 0x31ad3d55
- (BOOL)isPhone;	// 0x31ad3ddd
- (int)localizedCompareToString:(id)string;	// 0x31ad60e9
- (BOOL)localizedHasPrefix:(id)prefix caseSensitive:(BOOL)sensitive;	// 0x31ad4001
- (NSRange)rangeOfNewlineInRange:(NSRange)range;	// 0x31ad4315
- (BOOL)roomNameIsProbablyAutomaticallyGenerated;	// 0x31ad3b4d
- (id)stringByAddingURLEscapes;	// 0x31ad649d
- (id)stringByRemovingCharactersFromSet:(id)set;	// 0x31ad4179
- (id)stringByRemovingURLEscapes;	// 0x31ad6459
- (id)stringByRemovingWhitespace;	// 0x31ad3c51
- (id)stringByResolvingAndStandardizingPath;	// 0x31ad64ed
- (id)stringByStrippingControlCharacters;	// 0x31ad4221
- (id)stringWithDefaultServerIfNeeded:(id)defaultServerIfNeeded;	// 0x31ad628d
- (id)trimmedString;	// 0x31ad438d
- (id)uniqueSavePath;	// 0x31ad3bc5
- (unsigned)unsignedIntValue;	// 0x31ad3e6d
- (id)urlFromString;	// 0x31ad4445
@end

@interface NSString (SecureImAdditions)
- (id)equivalentEmailAddressForScreenName;	// 0x31ad8041
@end

@interface NSString (MobileMeHelpers)
@property(readonly, assign, nonatomic) BOOL hasMobileMeSuffix;	// G=0x31adf075; 
@property(readonly, assign, nonatomic) NSString *mobileMeDomain;	// G=0x31adf165; 
@property(readonly, assign, nonatomic) NSString *stripMobileMSuffixIfPresent;	// G=0x31adf011; 
// declared property getter: - (BOOL)hasMobileMeSuffix;	// 0x31adf075
// declared property getter: - (id)mobileMeDomain;	// 0x31adf165
// declared property getter: - (id)stripMobileMSuffixIfPresent;	// 0x31adf011
@end
