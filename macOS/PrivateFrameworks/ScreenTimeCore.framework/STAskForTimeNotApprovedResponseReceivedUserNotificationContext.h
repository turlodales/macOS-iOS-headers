//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STAskForTimeNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext
{
    NSString *_parentName;
    NSString *_requestedResourceName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *requestedResourceName; // @synthesize requestedResourceName=_requestedResourceName;
@property(copy, nonatomic) NSString *parentName; // @synthesize parentName=_parentName;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3;

@end

