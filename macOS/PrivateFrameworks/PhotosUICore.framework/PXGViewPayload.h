//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface PXGViewPayload : NSObject <NSCopying>
{
    Class _viewClass;
    id <PXGViewUserData> _userData;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <PXGViewUserData> userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewClass:(Class)arg1 userData:(id)arg2;

@end

