/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIYTFeedDocumentSpec.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RUIYTVideosDocumentSpec : XXUnknownSuperclass <RUIYTFeedDocumentSpec> {
	NSString *_title;	// 4 = 0x4
	BOOL _isPlaylist;	// 8 = 0x8
	int _type;	// 12 = 0xc
	NSString *_sortPreferenceKey;	// 16 = 0x10
	BOOL _requiresAccessToken;	// 20 = 0x14
	double _refreshInterval;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x273d35; 
@property(assign, nonatomic) BOOL isPlaylist;	// G=0x2740b9; S=0x2740c9; @synthesize=_isPlaylist
@property(readonly, assign, nonatomic) NSString *moreNRemainingSubTitle;	// G=0x273fc9; 
@property(readonly, assign, nonatomic) NSString *moreNToMTitle;	// G=0x273f99; 
@property(readonly, assign, nonatomic) NSString *moreNTotalSubTitle;	// G=0x273fb9; 
@property(readonly, assign, nonatomic) NSString *moreSingleRemainingSubTitle;	// G=0x273fa9; 
@property(readonly, assign, nonatomic) NSString *moreSingleTitle;	// G=0x273f89; 
@property(readonly, assign, nonatomic) NSString *noContentErrorMessage;	// G=0x273fd9; 
@property(assign, nonatomic) double refreshInterval;	// G=0x274151; S=0x274169; @synthesize=_refreshInterval
@property(assign, nonatomic) BOOL requiresAccessToken;	// G=0x274131; S=0x274141; @synthesize=_requiresAccessToken
@property(retain, nonatomic) NSString *sortPreferenceKey;	// G=0x2740f9; S=0x274109; @synthesize=_sortPreferenceKey
@property(retain, nonatomic) NSString *title;	// G=0x274081; S=0x274091; @synthesize=_title
@property(assign, nonatomic) int type;	// G=0x2740d9; S=0x2740e9; @synthesize=_type
+ (id)byAuthorDocumentSpecWithAuthorName:(id)authorName;	// 0x273b3d
+ (id)fetchDocumentSpecWithAssetIDs:(id)assetIDs;	// 0x273cbd
+ (id)relatedDocumentSpecWithAsset:(id)asset;	// 0x273c15
+ (id)videoSearchDocumentSpecWithSearchTerm:(id)searchTerm;	// 0x273ab1
+ (id)videosDocumentSpecForType:(int)type;	// 0x2737b9
+ (id)videosDocumentSpecForType:(int)type title:(id)title feedURL:(id)url requiresAccessToken:(BOOL)token;	// 0x2739b9
- (void).cxx_destruct;	// 0x27417d
// declared property getter: - (id)identifier;	// 0x273d35
// declared property getter: - (BOOL)isPlaylist;	// 0x2740b9
// declared property getter: - (id)moreNRemainingSubTitle;	// 0x273fc9
// declared property getter: - (id)moreNToMTitle;	// 0x273f99
// declared property getter: - (id)moreNTotalSubTitle;	// 0x273fb9
// declared property getter: - (id)moreSingleRemainingSubTitle;	// 0x273fa9
// declared property getter: - (id)moreSingleTitle;	// 0x273f89
// declared property getter: - (id)noContentErrorMessage;	// 0x273fd9
// declared property getter: - (double)refreshInterval;	// 0x274151
// declared property getter: - (BOOL)requiresAccessToken;	// 0x274131
// declared property setter: - (void)setIsPlaylist:(BOOL)playlist;	// 0x2740c9
// declared property setter: - (void)setRefreshInterval:(double)interval;	// 0x274169
// declared property setter: - (void)setRequiresAccessToken:(BOOL)token;	// 0x274141
// declared property setter: - (void)setSortPreferenceKey:(id)key;	// 0x274109
// declared property setter: - (void)setTitle:(id)title;	// 0x274091
// declared property setter: - (void)setType:(int)type;	// 0x2740e9
// declared property getter: - (id)sortPreferenceKey;	// 0x2740f9
// declared property getter: - (id)title;	// 0x274081
// declared property getter: - (int)type;	// 0x2740d9
- (id)videosDocument;	// 0x274045
@end
