//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSDate, NSString, NSURL;

@interface ASDPostBulletinRequestOptions : ASDRequestOptions
{
    NSString *_actionButtonTitle;
    NSURL *_actionButtonURL;
    NSDate *_creationDate;
    unsigned long long _destinations;
    NSURL *_launchURL;
    NSString *_message;
    NSString *_recordID;
    NSString *_title;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(nonatomic) unsigned long long destinations; // @synthesize destinations=_destinations;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSURL *actionButtonURL; // @synthesize actionButtonURL=_actionButtonURL;
@property(copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
- (id)init;

@end

