//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLSearchPlayableContentFromWatchList : SABaseClientBoundCommand
{
}

+ (id)searchPlayableContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchPlayableContentFromWatchList;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *siriLocale;
@property(nonatomic) BOOL onlyReturnNextItem;
@property(copy, nonatomic) NSString *contentType;
@property(copy, nonatomic) NSString *canonicalId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

