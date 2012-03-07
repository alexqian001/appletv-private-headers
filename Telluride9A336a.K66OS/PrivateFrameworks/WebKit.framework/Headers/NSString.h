/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (WebKitExtras)
+ (id)_web_stringWithData:(id)data textEncodingName:(id)name;	// 0x364d6ec5
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)bundleIdentifier;	// 0x364772ad
- (id)_web_stringByAbbreviatingWithTildeInPath;	// 0x364d6d81
- (id)_web_stringByStrippingReturnCharacters;	// 0x364d6e11
- (id)_webkit_filenameByFixingIllegalCharacters;	// 0x364d7265
- (BOOL)_webkit_hasCaseInsensitivePrefix:(id)prefix;	// 0x36482f79
- (BOOL)_webkit_hasCaseInsensitiveSubstring:(id)substring;	// 0x364d7259
- (BOOL)_webkit_hasCaseInsensitiveSuffix:(id)suffix;	// 0x364d724d
- (BOOL)_webkit_isCaseInsensitiveEqualToString:(id)string;	// 0x3647533d
- (id)_webkit_stringByCollapsingNonPrintingCharacters;	// 0x364d6ee5
- (id)_webkit_stringByCollapsingWhitespaceCharacters;	// 0x364d70b5
- (id)_webkit_stringByTrimmingWhitespace;	// 0x364827d9
@end

@interface NSString (WebNSDataExtrasInternal)
- (id)_web_capitalizeRFC822HeaderFieldName;	// 0x364d7c71
@end

@interface NSString (WebNSURLExtras)
- (id)_web_decodeHostName;	// 0x36499939
- (id)_web_decodeHostNameWithRange:(NSRange)range;	// 0x364d9025
- (id)_web_encodeHostName;	// 0x364d9071
- (id)_web_encodeHostNameWithRange:(NSRange)range;	// 0x364d9049
- (BOOL)_web_hostNameNeedsDecodingWithRange:(NSRange)range;	// 0x364d8fc9
- (BOOL)_web_hostNameNeedsEncodingWithRange:(NSRange)range;	// 0x364d8ff9
- (BOOL)_web_isUserVisibleURL;	// 0x364d95d5
- (id)_web_mapHostNameWithRange:(NSRange)range encode:(BOOL)encode makeString:(BOOL)string;	// 0x36499979
- (id)_webkit_URLFragment;	// 0x364d924d
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x364d8f65
- (BOOL)_webkit_isFileURL;	// 0x364d90f9
- (BOOL)_webkit_isJavaScriptURL;	// 0x36482f59
- (BOOL)_webkit_looksLikeAbsoluteURL;	// 0x364d9211
- (id)_webkit_queryKeysAndValues;	// 0x36499e65
- (NSRange)_webkit_rangeOfURLScheme;	// 0x364d9135
- (id)_webkit_scriptIfJavaScriptURL;	// 0x36482f11
- (id)_webkit_stringByReplacingValidPercentEscapes;	// 0x364d9749
- (id)_webkit_unescapedQueryValue;	// 0x36499ff1
@end

@interface NSString (WebNSStringExtrasIPhone)
- (id)_web_bestURLForUserTypedString;	// 0x364820cd
- (id)_web_possibleURLPrefixesForUserTypedString;	// 0x364f6825
- (id)_web_possibleURLsForForUserTypedString:(BOOL)userTypedString;	// 0x36482135
- (id)_web_possibleURLsForUserTypedString;	// 0x36482121
@end

@interface NSString (WebStringDrawing)
+ (BOOL)_web_ascentRoundingEnabled;	// 0x36471d81
+ (void)_web_setAscentRoundingEnabled:(BOOL)enabled;	// 0x3647231d
+ (void)_web_setWordRoundingAllowed:(BOOL)allowed;	// 0x3647233d
+ (void)_web_setWordRoundingEnabled:(BOOL)enabled;	// 0x36471d45
+ (BOOL)_web_wordRoundingAllowed;	// 0x3647232d
+ (BOOL)_web_wordRoundingEnabled;	// 0x36471d35
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only;	// 0x36471de9
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only renderedStringOut:(id *)anOut;	// 0x36471e45
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only renderedStringOut:(id *)anOut drawUnderline:(BOOL)underline;	// 0x364f872d
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only;	// 0x364720a1
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only renderedStringOut:(id *)anOut;	// 0x36472115
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only renderedStringOut:(id *)anOut drawUnderline:(BOOL)underline;	// 0x364f9701
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withAttributes:(id)attributes;	// 0x364f9421
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis;	// 0x364f912d
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing;	// 0x364f917d
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x36471d91
- (CGSize)_web_drawAtPoint:(CGPoint)point withFont:(GSFontRef)font;	// 0x364f90b5
- (CGSize)_web_drawInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x364f9601
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment;	// 0x364f9285
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing;	// 0x364f9229
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7;	// 0x364f91c5
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7 measureOnly:(BOOL)only;	// 0x3647202d
- (id)_web_securedStringIncludingLastCharacter:(BOOL)character;	// 0x364fb301
- (CGSize)_web_sizeForWidth:(float)width withAttributes:(id)attributes;	// 0x364f9341
- (CGSize)_web_sizeInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x364f9515
- (CGSize)_web_sizeInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis;	// 0x364f92e5
- (CGSize)_web_sizeInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis lineSpacing:(int)spacing;	// 0x36471fcd
- (CGSize)_web_sizeWithFont:(GSFontRef)font;	// 0x36470bb5
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis;	// 0x364f90fd
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis letterSpacing:(float)spacing;	// 0x36470be5
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis letterSpacing:(float)spacing resultRange:(NSRange *)range;	// 0x36470c25
- (id)_web_stringForWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x364f8d39
@end
