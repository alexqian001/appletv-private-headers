/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSObject.h"


@protocol GEOResourceManifestServerProxy <NSObject>
- (id)authToken;
- (oneway void)cancelRegionalResourcesLoadForKeys:(id)keys;
- (void)closeConnection;
- (oneway void)forceUpdate;
- (void)getResourceManifestWithHandler:(id)handler;
- (oneway void)loadRegionalResourcesForKeys:(id)keys allowNetwork:(BOOL)network;
- (void)openConnection;
- (oneway void)refreshActiveTileGroup;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)identifier;
- (oneway void)startServer:(id)server;
@end

