//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface NSQueryGenerationToken : NSObject <NSCopying>
{
}

+ (id)nostoresQueryGenerationToken;
+ (id)currentQueryGenerationToken;
+ (id)unpinnedQueryGenerationToken;
- (id)_storesForRequestRoutingFrom:(id)arg1;
- (id)_tokenForStore:(id)arg1;
- (id)_token;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

