//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapItemChildActionSearch;

@interface GEOMapItemChildAction : NSObject
{
    long long _childActionType;
    GEOMapItemChildActionSearch *_childActionSearch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOMapItemChildActionSearch *childActionSearch; // @synthesize childActionSearch=_childActionSearch;
@property(nonatomic) long long childActionType; // @synthesize childActionType=_childActionType;
- (id)initWithChildAction:(id)arg1;

@end

