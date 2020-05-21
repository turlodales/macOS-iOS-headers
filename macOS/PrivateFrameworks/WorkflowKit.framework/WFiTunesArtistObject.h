//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFiTunesObject.h>

#import "MTLJSONSerializing.h"

@class NSDictionary, NSString;

@interface WFiTunesArtistObject : WFiTunesObject <MTLJSONSerializing>
{
    NSString *_type;
    NSString *_genre;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

