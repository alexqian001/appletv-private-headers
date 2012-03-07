/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableSet, NSMutableArray;

@interface MessageStore : NSObject <NSCopying> {
	NSMutableSet *_uniqueStrings;	// 4 = 0x4
	union {
		struct {
			NSMutableArray *_headerDataCache;
			NSMutableArray *_headerCache;
			NSMutableArray *_bodyDataCache;
			NSMutableArray *_bodyCache;
		} objectCaches;
		struct {
			CFDictionaryRef _headerDataCache;
			CFDictionaryRef _headerCache;
			CFDictionaryRef _bodyDataCache;
			CFDictionaryRef _bodyCache;
		} intKeyCaches;
	} _caches;	// 8 = 0x8
}
+ (Class)classForMimePart;	// 0x35099171
+ (Class)headersClass;	// 0x35099155
- (id)_cachedBodyDataContainerForMessage:(id)message valueIfNotPresent:(id)present;	// 0x35099355
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x350993bd
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;	// 0x35099385
- (id)_cachedHeaderDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x35099449
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;	// 0x3509936d
- (id)_fetchBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available downloadIfNecessary:(BOOL)necessary partial:(BOOL *)partial;	// 0x350992b1
- (id)_fetchBodyForMessage:(id)message;	// 0x35098e79
- (id)_fetchBodyForMessage:(id)message updateFlags:(BOOL)flags;	// 0x35098d2d
- (void)_flushAllCaches;	// 0x35099055
- (void)_flushAllCachesLocking:(BOOL)locking;	// 0x350992dd
- (void)_flushAllMessageData;	// 0x35098bd1
- (id)_setOrGetBody:(id)body forMessage:(id)message updateFlags:(BOOL)flags;	// 0x35098ced
- (id)additionalHeadersForForwardOfMessage:(id)message;	// 0x35098b85
- (id)additionalHeadersForReplyOfMessage:(id)message;	// 0x35098b81
- (id)bestAlternativeForPart:(id)part;	// 0x35098fc5
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x35099069
- (id)bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;	// 0x35098e8d
- (id)copyWithZone:(NSZone *)zone;	// 0x35098be1
- (id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL *)download;	// 0x35099461
- (void)dealloc;	// 0x350991c9
- (id)decryptedTopLevelPartForPart:(id)part;	// 0x35098f45
- (id)defaultAlternativeForPart:(id)part;	// 0x35098fb5
- (id)fullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x35098f21
- (BOOL)hasCompleteDataForMimePart:(id)mimePart;	// 0x35099229
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x35098b75
- (id)headersForMessage:(id)message fetchIfNotAvailable:(BOOL)available;	// 0x35098bf1
- (void)setMessageClass:(Class)aClass;	// 0x35098b7d
- (void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted forMessage:(id)message;	// 0x35099141
- (id)uniquedString:(id)string;	// 0x35099575
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)mimepart;	// 0x35098b79
@end
