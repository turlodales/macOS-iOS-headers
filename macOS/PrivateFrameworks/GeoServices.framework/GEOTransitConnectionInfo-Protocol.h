//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol GEOTransitConnectionInfo <NSObject>
@property(readonly, nonatomic) int providerID;
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, nonatomic) NSURL *urlToOpen;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSString *name;
@end

