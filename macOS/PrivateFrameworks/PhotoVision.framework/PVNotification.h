//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PVNotification : NSObject
{
    NSString *_name;
    id _details;
}

+ (id)notificationWithName:(id)arg1 details:(id)arg2;
+ (id)notificationWithName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id details; // @synthesize details=_details;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithName:(id)arg1 details:(id)arg2;

@end

