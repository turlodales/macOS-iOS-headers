//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFContentSniffer : NSObject
{
}

+ (BOOL)MIMETypeIsHTMLOrText:(id)arg1;
+ (id)MIMETypeForData:(id)arg1;
+ (id)MIMETypeForString:(id)arg1;
+ (BOOL)isOctetStream:(id)arg1;
+ (BOOL)isWord:(id)arg1;
+ (BOOL)isSWF:(id)arg1;
+ (BOOL)isPNG:(id)arg1;
+ (BOOL)isPDF:(id)arg1;
+ (BOOL)isJPEG:(id)arg1;
+ (BOOL)isGIF:(id)arg1;
+ (BOOL)isXML:(id)arg1;
+ (BOOL)isXHTML:(id)arg1;
+ (BOOL)isHTML:(id)arg1;
+ (id)MIMETypeForData:(id)arg1 andString:(id)arg2;

@end

