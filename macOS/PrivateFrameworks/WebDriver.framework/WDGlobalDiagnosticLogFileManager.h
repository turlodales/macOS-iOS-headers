//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebDriver/DDLogFileManagerDefault.h>

@class NSDateFormatter, NSString;

@interface WDGlobalDiagnosticLogFileManager : DDLogFileManagerDefault
{
    NSString *_logFilePrefix;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (id)createNewLogFile;
- (id)logFilePrefix;
- (BOOL)isLogFile:(id)arg1;
- (id)initWithLogsDirectory:(id)arg1;

@end

