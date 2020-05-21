//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface SGTMailStatus : NSObject
{
    NSArray *names;
    NSString *menuName;
    NSString *imageName;
    NSString *spotlightAttribute;
    NSImage *statusImage;
    long long statusType;
}

- (void).cxx_destruct;
@property(readonly) NSString *spotlightAttribute; // @synthesize spotlightAttribute;
@property(readonly) NSString *menuName; // @synthesize menuName;
@property(readonly) long long statusType; // @synthesize statusType;
- (BOOL)matchesInput:(id)arg1;
@property(readonly) NSImage *statusImage;
@property(readonly) NSString *displayName;
- (id)initWithStatusType:(long long)arg1 names:(id)arg2 menuName:(id)arg3 imageName:(id)arg4 spotlightAttribute:(id)arg5;

@end

