//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPProcessableFeedback.h"
#import "_CPSearchViewAppearFeedback.h"

@class NSData, NSDictionary, NSString;

@interface _CPSearchViewAppearFeedback : PBCodable <_CPProcessableFeedback, _CPSearchViewAppearFeedback, NSSecureCoding>
{
    BOOL _isOnLockScreen;
    BOOL _isOverApp;
    BOOL _readerTextAvailable;
    int _viewAppearEvent;
    unsigned long long _timestamp;
}

@property(nonatomic) BOOL readerTextAvailable; // @synthesize readerTextAvailable=_readerTextAvailable;
@property(nonatomic) BOOL isOverApp; // @synthesize isOverApp=_isOverApp;
@property(nonatomic) BOOL isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property(nonatomic) int viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

