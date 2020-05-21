//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/AMXPCToken.h>

@class NSString;

@interface AMEventKitCalendarItemXPCToken : AMXPCToken
{
    NSString *_calendarItemIdentifier;
    unsigned long long _entityType;
}

+ (id)eventStoreForConversionForEntityType:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property unsigned long long entityType; // @synthesize entityType=_entityType;
@property(retain) NSString *calendarItemIdentifier; // @synthesize calendarItemIdentifier=_calendarItemIdentifier;
- (id)_am_convertFromXPCWithWorkflow:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalendarItem:(id)arg1;

@end

