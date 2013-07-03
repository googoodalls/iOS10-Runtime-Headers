/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSMutableSet, NSString, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface BKSBaseXPCServer : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableSet *_clients;
    BOOL _connectionResumed;
    BOOL _usesAnonymousConnection;
    NSString *_serviceName;
}

@property(getter=usesAnonymousConnection) BOOL usesAnonymousConnection;


- (void)setUsesAnonymousConnection:(BOOL)arg1;
- (BOOL)usesAnonymousConnection;
- (id)_copyEndpoint;
- (id)_clients;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (void)_sendReply:(id)arg1 messagePacker:(id)arg2;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (id)_clientForConnection:(id)arg1;
- (void)_removeClientConnection:(id)arg1;
- (id)queue_newClientForConnection:(id)arg1;
- (id)_notifyTokenName;
- (void)_addClientConnection:(id)arg1;
- (void)resumeServer;
- (void)registerServerSuspended;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)queue_handleMessage:(id)arg1;
- (void)run;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;
- (id)_connection;
- (void)_invalidate;

@end