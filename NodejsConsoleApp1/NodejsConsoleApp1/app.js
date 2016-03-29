////const http = require('http');

////http.createServer(function (request, response) {
////	response.writeHead(200, { 'Content-Type': 'text/plain' });
////	response.end('Hello World\n');
////}).listen(8124);

////console.log('Server running at http://127.0.0.1:8124/');


//const asset=require('assert');

//assert(true);//OK
//assert(1); //OK
//assert(false);
//// throw "AssertionError: false == true"

/* var fs=require("fs");
var data=fs.readFileSync('input.txt');
console.log(data.toString());
console.log("Program Ended"); */

/* 
var fs=require("fs");
fs.readFile("input.txt",(err,data)=>{
	if(err)
		return console.error(err);
	console.log(data.toString());
});

console.log("Program Ended"); 
*/

//// Import events module
//var events = require("events");
//// Create an eventEmitter object
//var eventEmitter = new events.EventEmitter();

//// Create an event handler as follows
//var connectHandler = function(){
//console.log("connection successful.");

////Fire the data_received event
//eventEmitter.emit("data_received");
//}

//// Bind the connection event with the handler
//eventEmitter.on("connection",connectHandler);

//// Bind the data_received event with the annoymous function
//eventEmitter.on("data_received",function() {
//	console.log('data received successful.');
//});

//// Fire the connection event
//eventEmitter.emit("connection");

//console.log("Program Ended");

/*
var events = require('events');

var eventEmitter = new events.EventEmitter();

var Zhang3Handler = function () {
	console.log('张三是也');
	eventEmitter.emit("start4");
};

var Li4Handler = function () {
	console.log('李四是也');
};

var Wang2Handler = function() {
	console.log('王二是也');
	eventEmitter.emit("start3");
};

eventEmitter.on("start2", Wang2Handler);
eventEmitter.on("start3",Zhang3Handler);
eventEmitter.on("start4", Li4Handler);
console.log("---开始---");
eventEmitter.emit("start2");

console.log("---结束---");
 */

/*******************How Node Applications Work?***********************/
/*
var fs = require("fs");

fs.readFile('input1.txt', function (err, data) {
	if (err) {
		console.log(err.stack);
		return;
	}
	console.log(data.toString());
});
console.log("Program Ended");
*/

var events = require('events');
var eventEmitter = new events.EventEmitter();

// listener #1
var listener1 = function () {
	console.log('listener1 executed.');
}

// listener #2
var listener2 = function () {
	console.log('listener2 executed.');
}

// Bind the connection event with the listener1 function
eventEmitter.addListener('connection', listener1);

// Bind the connection event with the listener2 function
eventEmitter.on('connection', listener2); 

var eventListeners = require('events').EventEmitter.listenerCount(eventEmitter, 'connection');
console.log(eventListeners + " Listener(s) listening to connection event");

// Fire the connection event
eventEmitter.emit('connection');

// Remove the binding of listener1 function
eventEmitter.removeListener('connection', listener1);
console.log("listener1 will not listen now.");

// Fire the connection event
eventEmitter.emit("connection");

eventListeners = require('events').EventEmitter.listenerCount(eventEmitter, 'connection');
console.log(eventListeners + " Listener(s) listening to connection event");


console.log("Program Ended.");