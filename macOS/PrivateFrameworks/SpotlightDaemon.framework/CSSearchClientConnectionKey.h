//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSObject<OS_xpc_object>;

@interface CSSearchClientConnectionKey : NSObject <NSCopying>
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)keyWithConnection:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConnection:(id)arg1;

@end

