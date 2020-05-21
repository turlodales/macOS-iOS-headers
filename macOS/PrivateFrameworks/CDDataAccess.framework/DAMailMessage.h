//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface DAMailMessage : NSObject <NSCoding>
{
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)smimeType;
- (BOOL)verbIsSet;
- (BOOL)flaggedIsSet;
- (BOOL)readIsSet;
- (id)preview;
- (id)instanceID;
- (id)serverID;
- (id)clientID;
- (BOOL)isDraft;
- (id)bcc;
- (id)sender;
- (int)lastVerb;
- (id)folderID;
- (id)longID;
- (id)remoteID;
- (id)conversationIndex;
- (id)conversationId;
- (id)threadTopic;
- (BOOL)meetingRequestIsActionable;
- (id)meetingRequestMetaData;
- (id)meetingRequestUUID;
- (id)attachments;
- (id)messageClass;
- (int)bodyTruncated;
- (int)bodySize;
- (int)bodyType;
- (id)body;
- (BOOL)flagged;
- (BOOL)read;
- (int)importance;
- (id)displayTo;
- (id)subject;
- (id)date;
- (id)replyTo;
- (id)from;
- (id)cc;
- (id)to;

@end

