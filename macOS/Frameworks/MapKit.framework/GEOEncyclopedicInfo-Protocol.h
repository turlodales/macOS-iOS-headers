//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapItemAttribution, NSArray, NSString;

@protocol GEOEncyclopedicInfo <NSObject>
@property(readonly, nonatomic) GEOMapItemAttribution *encyclopedicAttribution;
@property(readonly, nonatomic) BOOL hasStandAloneFactoids;
@property(readonly, nonatomic) NSArray *factoids;
@property(readonly, nonatomic) BOOL hasPairOfFactoids;
@property(readonly, nonatomic) NSString *textBlockText;
@property(readonly, nonatomic) NSString *textBlockTitle;
@property(readonly, nonatomic) BOOL hasTextBlock;
@end

